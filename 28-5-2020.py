/*QUESTION
Python program to find digital root of a number */


num = input()
def droot(num):
    if len(num) == 1:
        return num
    else:
        sum = 0
        for i in num:
            sum += int(i)
        num = str(sum)
        return droot(num)
print(droot(num))
