// Problem: RSMSPR01
// Platform: codechef
// Language: /* Solution as follows */

CREATE TABLE Products (
    product_id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    category TEXT CHECK (category IN ('Electronics', 'Clothing', 'Grocery', 'Furniture')),
    price REAL NOT NULL CHECK (price > 0),
    stock_quantity INTEGER CHECK (stock_quantity >= 0)
);

CREATE TABLE Customers (
    customer_id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    email TEXT UNIQUE NOT NULL,
    phone TEXT UNIQUE NOT NULL,
    address TEXT DEFAULT 'Not Provided'
);

CREATE TABLE Orders (
    order_id INTEGER PRIMARY KEY,
    customer_id INTEGER NOT NULL,
    order_date DATE DEFAULT CURRENT_DATE,
    total_amount REAL CHECK (total_amount > 0),
    Remarks_if_any TEXT DEFAULT 'No Remarks'
);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR01?tab=solution
// Solved on: 2026-10-27T20:13:22.596Z

/* Update the '_' in the code below */

CREATE TABLE Products (
    product_id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    category TEXT CHECK (category IN ('Electronics', 'Clothing', 'Grocery', 'Furniture')),
    price REAL NOT NULL CHECK (price > 0),
    stock_quantity INTEGER CHECK (stock_quantity >= 0)
);

CREATE TABLE Customers (
    customer_id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    email TEXT UNIQUE NOT NULL,
    phone TEXT UNIQUE NOT NULL,
    address TEXT DEFAULT 'Not Provided'
);

CREATE TABLE Orders (
    order_id INTEGER PRIMARY KEY,
    customer_id INTEGER NOT NULL,
    order_date DATE DEFAULT CURRENT_DATE,
    total_amount REAL CHECK (total_amount > 0),
    Remarks_if_any TEXT DEFAULT 'No Remarks'
);