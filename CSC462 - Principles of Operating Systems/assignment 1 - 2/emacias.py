#Code ask for input, then print the input without any extra spaces
#It also allows the user to enter a prompt, which will repeat evertime
#If user enters (-) this will not show a prompt
import sys
import os 
      
pid = os.fork()

# pid greater than 0 represents
# the parent process 
if pid > 0 :
    print("I am parent process:")
    print("Process ID:", os.getpid())
    print("Child's process ID:", pid)
  
# pid equal to 0 represents
# the created child process
else :
    print("\nI am child process:")
    print("Process ID:", os.getpid())
    print("Parent's process ID:", os.getppid())
  
  