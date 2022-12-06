#Instance variable : Name, Amount, Address, AccountNo
#Instance variable : CreateAccount(), DisplayAccountInfo()
#class variables : Bank_Name, ROI_On_FD
# class method : DisplayBankInfo()
# static method : DisplayKYCInfo()

class Bank_Account:

    Bank_Name = "HDFC Bank Pvt. Ltd."
    ROI_On_FD = 6.7
    def __init__(self):
        self.Name = ""
        self.Amount = 0
        self.Address = ""
        self.AccountNo = 0

    def CreateAccount(self):
        print("Enter your name : ")
        self.Name = input()

        print("Enter your intial amount : ")
        self.Amount = int(input())

        print("Enter your address : ")
        self.Address = input()

        print("Enter your Account Number : ")
        self.AccountNo = int(input())

    def DisplayAccountInfo(self):
        print("Your account information is as below : ")
        print("Name of Account Holder : ",self.Name)
        print("Account Number : ", self.AccountNo)
        print("Address of Account Holder : ", self.Address)
        print("Current Amount in account : ", self.Amount)

    @classmethod
    def DisplayBankInfo(cls):
        print("Welcome to banking console")
        print("Name of our bank is : ",cls.Bank_Name)
        print("Rate of interest we offer on Fixed Deposit is : ",cls.ROI_On_FD)

    @staticmethod
    def DisplayKYCInfo():
        print("Please consider below KYC Information")
        print("According to rules of Govt. Of India you have to submit below documents")
        print("1 : Clear and recent passport size photo")
        print("2 : Photo of Aadhar card")
        print("1 : Photo of Pan card")

    def Deposit(self,value):
        self.Amount = self.Amount + value

    def Withdraw(self,value):
        self.Amount = self.Amount - value
    
def main():

    print("---------------------------Banking Application----------------------")
    print("---------Calling static method to display KYC info---------------------")


    Bank_Account.DisplayKYCInfo()

    print("---------Accessing the instance variables from main---------------------")

    print("Name of Bank : ",Bank_Account.Bank_Name)
    print("Rate of Interest on Fixed Deposit : ", Bank_Account.ROI_On_FD)

    print("---------Calling class method to display Bank Information---------------------")

    Bank_Account.DisplayBankInfo()

    print("---------Creating object of class---------------------")

    User1 = Bank_Account()
    User2 = Bank_Account()

    print("Creating the first account")
    print("---------Enter details of first account holder---------------------")

    User1.CreateAccount()

    print("Creating the Second account")
    print("---------Enter details of second account holder---------------------")

    User2.CreateAccount()

    print("---------calling instance method to display info of first user---------------------")

    User1.DisplayAccountInfo()

    print("---------calling instance method to display info of second user---------------------")
    User2.DisplayAccountInfo()

    User1.Deposit(500)
    User2.Deposit(1200)

    print("Amount of {} after deposit is {} : ".format(User1.Name,User1.Amount))
    print("Amount of {} after deposit is {} : ".format(User2.Name,User2.Amount))

    print("---------User1 withdraws 200---------------------")

    User1.Withdraw(200)
    print("---------User2 withdraws 3000---------------------")

    User2.Withdraw(3000)

    print("Amount of {} after deposit is {} : ".format(User1.Name, User1.Amount))
    print("Amount of {} after deposit is {} : ".format(User2.Name, User2.Amount))

if __name__ == "__main__":
    main()
