struct ipc_perm {
  key_t __ipc_perm_key;
  uid_t uid;
  gid_t gid;
  uid_t cuid;
  gid_t cgid;
  mode_t mode;
  int __ipc_perm_seq;
  long long __pad1;
  long long __pad2;
};
