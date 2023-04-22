import threading
import random
#- cookie monster code
#- start with a large amount of cookies in a jar
#- two cookie monster are tasked with eating all the cookies
# each cookie monster can only get at most 8 cookies,
  # - this is determined by a random number
#at the end the monster that has eaten the most 
#cookies wins
# threads are used to do this at teh same time
#this allows for each monster to take from the cookie jar
# at the same time

cookies = 50  # initial number of cookies

class CookieMonster:
    #create name and cookie eaten variables
    def __init__(self, name):
        self.name = name
        self.cookies_eaten = 0
    

    def eat_cookies(self):
        global cookies
        while cookies > 0:
            num_cookies = random.randint(1, 8)  # random number of cookies to eat
            if num_cookies > cookies:
                num_cookies = cookies
            cookies -= num_cookies
            self.cookies_eaten += num_cookies
            print(f"{self.name} ate {num_cookies} cookies.")
        

# create two CookieMonster instances
monster1 = CookieMonster("Monster 1")
monster2 = CookieMonster("Monster 2")

# create two threads, one for each monster
thread1 = threading.Thread(target=monster1.eat_cookies)
thread2 = threading.Thread(target=monster2.eat_cookies)

# start both threads
thread1.start()
thread2.start()

# wait for both threads to finish
thread1.join()
thread2.join()

# determine the winner based on cookies eaten
if monster1.cookies_eaten > monster2.cookies_eaten:
    print(f"{monster1.name} wins with {monster1.cookies_eaten} cookies eaten!")
elif monster2.cookies_eaten > monster1.cookies_eaten:
    print(f"{monster2.name} wins with {monster2.cookies_eaten} cookies eaten!")
else:
    print("It's a tie!")

