__asm__(
    ".set push\n"
    ".set noreorder\n"
    ".text \n"
    ".global _" START
    "\n"
    ".global " START
    "\n"
    ".global " START
    "_data\n"
    ".type   _" START
    ", @function\n"
    ".type   " START
    ", @function\n"
    ".type   " START
    "_data, @function\n"
    "_" START
    ":\n"
    "" START
    ":\n"
    "	bal 1f \n"
    "	move $fp, $0 \n"
    "" START
    "_data: \n"
    "	.gpword " START
    "_data \n"
    "	.gpword " START
    "_c \n"
    ".weak _DYNAMIC \n"
    ".hidden _DYNAMIC \n"
    "	.gpword _DYNAMIC \n"
    "1:	lw $gp, 0($ra) \n"
    "	subu $gp, $ra, $gp \n"
    "	move $4, $sp \n"
    "	lw $5, 8($ra) \n"
    "	addu $5, $5, $gp \n"
    "	lw $25, 4($ra) \n"
    "	addu $25, $25, $gp \n"
    "	and $sp, $sp, -8 \n"
    "	jalr $25 \n"
    "	subu $sp, $sp, 16 \n"
    ".set pop \n");
