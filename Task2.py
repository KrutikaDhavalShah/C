import schedule
import time
import datetime

def Fun():
    print("Inside Fun at the time : ",datetime.datetime.now())
def main():
    print("Inside task scheduler")
    print("Current time is : ",datetime.datetime.now())

    schedule.every(1).minutes.do(Fun)

    while(True):                 #unconditional infinite loop
        schedule.run_pending()
        time.sleep(1)       #1sec sleep,minimum 1s can put 50s

if __name__ == "__main__":
    main()