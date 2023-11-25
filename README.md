# Grocery Store C++ Project

A C++ program that allows customers to order groceries.

Reads in the following files:

- customers.txt
- items.txt

## Classes

### Customer Class

#### Customer Attributes

- customerID (Type: Integer)
  - This is a unique ID used to find a customer and the information below.
- name (Type: String)
  - The customer's name
- city (Type: String)
  - The customer's city
- state (Type: String)
  - The customer's state
- zipcode (Type: String)
  - The customer's zipcode
- phone email (Type: String)
  - The customer's email

#### Customer Functions

##### setCustomer()

This is a setter function used to create a new customer Object.

###### setCustomer() Parameters

|Name|Type|Required|
|----|----|----|
|new_customerID|integer| Yes|
|new_name|string| Yes|
|new_address|string| Yes|
|new_city|string| Yes|
|new_state|string| Yes|
|new_zipcode|string| Yes|
|new_phone|string| Yes|
|new_email|string| Yes|

##### Customer GetID()

Returns the customerID

### Item Class

#### Item Attributes

- itemID (Type: Integer)
  - This is a unique ID used to find a item and the information below.
- description (Type: String)
  - This is the item's description.
- price (Type: Double)
  - This is the item's price, using type double for precision.

#### Item Functions

##### setItem()

This is a setter function used to create a new item Object.

###### setItem() Parameters

|Name|Type|Required|
|----|----|----|
|new_itemID|integer| Yes|
|new_description|string| Yes|
|new_price|double| Yes|

##### Item GetID()

Returns the itemID

##### Item GetDescription()

Returns the item's description

##### Item GetPrice()

Returns the item's price

Created By Diana Cervantes 2023.
