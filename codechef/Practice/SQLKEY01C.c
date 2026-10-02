// Problem: SQLKEY01C
// Platform: codechef
// Language: CREATE TABLE Customers (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(255),
    city VARCHAR(255)
);

CREATE TABLE Orders (
    order_id INT PRIMARY KEY,
    customer_id INT NULL,  -- customer_id can be NULL
    order_date DATE,
    amount DECIMAL(10, 2),
    FOREIGN KEY (customer_id) REFERENCES Customers(customer_id) 
    ON DELETE SET NULL ON UPDATE SET NULL
);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/SQLKEY01C
// Solved on: 2026-10-02T18:15:59.846Z

-- Write a delete query to delete John Doe's details from Customers table and notice the changes in the Orders table
DELETE FROM Customers WHERE customer_name = 'John Doe';

-- Or, check the changes in the Orders table (after ON DELETE SET NULL)
SELECT * FROM Orders;