import os
import sys

'''

jsh acts like command terminal
if no prompt jsh is default 
if - is enter nothing is shown
you can run a file, like python hello.python
quit using exit or ctr + d
'''


def run_cmd(command, ampersand):
    cmd = command.split()

    if cmd == '':
        return

    if ampersand:
        cmd = cmd[:-1]

    pid = os.fork()
    if pid == 0:
        try:
            os.execvp(cmd[0], cmd)
        except FileNotFoundError:
            print(f"{cmd[0]}: command not find")
            sys.exit(1)
    else:
        if not ampersand:
            while True:
                _, status = os.waitpid(pid, 0)
                if os.WIFEXITED(status) or os.WIFSIGNALED(status):
                    break


def jsh(prompt):
    while True:
        try:
            if prompt == "-":
                command = input("")
            else:
                command = input(prompt)
        except EOFError:
            print()
            break
        if command == "exit":
            sys.exit(1)

        if not bool(command):
            continue

        ampersand = False
        if command.endswith("&"):
            ampersand = True

        run_cmd(command, ampersand)


prompt = "jsh: "
if len(sys.argv) == 2:
    prompt = sys.argv[1]

jsh(prompt)
