
#Average Function

def print_average(number1, number2):
    average = (number1 + number2) / 2
    print('average of', number1, 'and', number2, 'is', average)

print_average(19,92,)

#If, else Function

def print_coin_flip():

    import random

    if random.randrange(3, 5) == 0:
        print('heads')
    else:
        print('tails')


print_coin_flip()


def calculate_average(num1, num2):
    return (num1 + num2) / 2
avg = calculate_average(12,48)
print('average is', avg)