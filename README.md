# Food Ordering System

A command-line based food ordering system that allows both buyers and sellers to manage food orders efficiently. The system is implemented in C++ and provides separate interfaces for buyers and sellers to manage their respective tasks.

## Features

### For Buyers
- View the current menu
- Place new orders
- View personal order history
- Copy existing orders
- Track order status

### For Sellers
- View and manage the menu
- Add/update food items
- View all orders
- Process orders
- Track order status

## Project Structure

```
├── main.cpp           # Main program entry point and user interface
├── Food.h/cpp         # Food item class definition and implementation
├── Menu.h/cpp         # Menu management class
├── Order.h/cpp        # Order class for handling individual orders
├── OrderList.h/cpp    # Order list management class
├── Buyer.h/cpp        # Buyer class for customer management
├── input/            # Directory for input files
├── output/           # Directory for output files
└── Makefile          # Build configuration
```

## Prerequisites

- C++ compiler (supporting C++11 or later)
- Make utility
- Standard C++ libraries

## Building the Project

1. Clone the repository:
```bash
git clone [repository-url]
cd Food_Ordering_System
```

2. Build the project using make:
```bash
make
```

3. Run the executable:
```bash
./Food_Ordering_System.exe
```

## Usage

### Main Menu Options
1. Seller Actions
2. Buyer Actions
3. Exit

### Seller Actions
- View Menu
- Update Menu
- View Orders
- Process Orders
- Exit

### Buyer Actions
- View Menu
- Place Order
- View My Orders
- Copy an Order
- Exit

## Implementation Details

The system uses object-oriented programming principles with the following key classes:

### Implemented Features
- `Food`: Basic food item management with ID, name, and price properties
- `Menu`: Core menu management with add/display functionality
- `Order`: Basic order creation and management
- `OrderList`: Order tracking and management system
- `Buyer`: Basic buyer information management

### TODO/TASK Items
- Implement persistent storage for orders and menu items
- Add user authentication and secure login system
- Implement order status tracking system
- Add payment processing functionality
- Create a more robust error handling system
- Implement order validation and verification
- Add support for order modifications after placement
- Implement order cancellation functionality
- Add support for special dietary requirements
- Create a reporting system for sales analytics
- Implement a notification system for order updates
- Add support for multiple payment methods
- Create a rating and review system
- Implement order scheduling functionality
- Add support for promotional codes and discounts

