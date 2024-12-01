import os
from pathlib import Path

c_extensions = (".c", ".h")


def format_files(path : Path):
    for file in path.rglob('*'):
        if file.is_file() and file.suffix in c_extensions:
            os.system("clang-format -i -style=file " + str(file))

paths = [ "arch", "compat", "crt", "include", "ldso", "src" ]

if __name__ == "__main__":
    for path in paths:
        format_files(Path(path))
