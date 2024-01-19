weight = 4.8
price = None
premium = False
drone = False

#Drone shipping

if drone == True:
  if weight <= 2:
    pricedrone = (weight * 4.50)

  elif (weight > 2) and (weight <= 6):
    pricedrone = (weight * 9.00)

  elif (weight > 6) and (weight <= 10):
    pricedrone = (weight * 12.00)

  elif (weight > 10):
    pricedrone = (weight * 14.25)
  print("You want a drone, right?")
  print(f"{weight} is the weight of your package")
  print(f"${pricedrone} is the price for your expedition")

#Ground shipping

if drone == False and premium == False:
  if weight <= 2:
    price = (weight * 1.50) + 20.00

  elif (weight > 2) and (weight <= 6):
    price = (weight * 3.00) + 20.00

  elif (weight > 6) and (weight <= 10):
    price = (weight * 4.00) + 20.00

  elif (weight > 10):
    price = (weight * 4.75) + 20.00
  print("You're not a Premium User")
  print(f"{weight} is the weight of your package")
  print(f"${price} is the price for your expedition")
  
#Ground shipping Premium
  
elif drone == False and premium == True:
  pricepremium = 125.00
  print("You're a Premium User")
  print(f"{weight} is the weight of your package")
  print(f"${pricepremium} is the price for your expedition")
   