# importing library function for string and random strings
# for this reason we can easily create a random string for authentication Code..
import string
import random
# logo of this tool just print out ascii art.
print('-------------------------------------------------------------------')
print('██████   █████  ███████ ███████  ██████  ███████ ███    ██ ██████  ')
print('██   ██ ██   ██ ██      ██      ██       ██      ████   ██ ██   ██ ')
print('██████  ███████ ███████ ███████ ██   ███ █████   ██ ██  ██ ██████  ')
print('██      ██   ██      ██      ██ ██    ██ ██      ██  ██ ██ ██   ██ ')
print('██      ██   ██ ███████ ███████  ██████  ███████ ██   ████ ██   ██ ')
print('-------------------------------------------------------------------')
print('----------Hi everyone, Wellcome to password generate tool----------')
print('                  This tool create @Jibble Einux                   ')
print('            follow on github,facebook: @JibbleEinuxCODE            ')


# this function make for creating a random authentication Code
# and also create a random password
# thats why you can make a easy password , strong password , semi-strong password and extra-strong password

def get_random_string(length):
    letters = string.ascii_lowercase
    result_str = ''.join(random.choice(letters) for i in range(length))
    print('Your authentication code is generated: ' + result_str)
    print('You Can Find Your Password (if Yo forget password) with this Authentication Code.')
    passWord = (str(len(result_str)) + str(result_str[:2].lower()) + str(result_str[:1:-2].upper()) + "-" + str(result_str.count(result_str)) + str(result_str[:1].upper()) + "X" + "6" + "_" + "D" + str(
        result_str[0::3].lower()) + str(result_str.count(result_str)) + "X" + "f" + str(result_str[:4].lower()) + "+" + str(result_str[4::-1].upper())).strip().replace(" ", "")
    print('Your Password is: ' + passWord)


# this function make for finding password if you forgotten
# if you want to find your password you just enter your random authentication Code / custom authentication code
# after giving your authentication code this function creating your password and it will be matched your old password
# Because of when 1st time create your password with this authentication code this time will be same

def find_password_string():
    result_str = input('Enter You Authentication Code: ')
    passWord = (str(len(result_str)) + str(result_str[:2].lower()) + str(result_str[:1:-2].upper()) + "-" + str(result_str.count(result_str)) + str(result_str[:1].upper()) + "X" + "6" + "_" + "D" + str(
        result_str[0::3].lower()) + str(result_str.count(result_str)) + "X" + "f" + str(result_str[:4].lower()) + "+" + str(result_str[4::-1].upper())).strip().replace(" ", "")
    print('Your Password is: ' + passWord)


# this section creating for user can make her own authentication code thats why he can remember her authetication code
# and people can easily find her password thats why make this section

def custom_auth_Code():
    result_str = input('Enter You Custom Authentication Code: ')
    passWord = (str(len(result_str)) + str(result_str[:2].lower()) + str(result_str[:1:-2].upper()) + "-" + str(result_str.count(result_str)) + str(result_str[:1].upper()) + "X" + "6" + "_" + "D" + str(
        result_str[0::3].lower()) + str(result_str.count(result_str)) + "X" + "f" + str(result_str[:4].lower()) + "+" + str(result_str[4::-1].upper())).strip().replace(" ", "")
    print('Your Password is: ' + passWord)


print('Password Types(1.Easy, 2.normal, 3.Strong, 4.Extra-Strong)')
print('Enter Your Password type(1-4): ')
passwordType = int(input())
if passwordType == 1:
    get_random_string(8)
elif passwordType == 2:
    get_random_string(12)
elif passwordType == 3:
    get_random_string(16)
else:
    get_random_string(20)
