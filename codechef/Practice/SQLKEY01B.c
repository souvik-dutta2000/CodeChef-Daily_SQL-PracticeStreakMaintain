// Problem: SQLKEY01B
// Platform: codechef
// Language: CREATE TABLE Customers (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(255),
    city VARCHAR(255)
);

CREATE TABLE Orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    order_date DATE,
    amount DECIMAL(10, 2),
    FOREIGN KEY (customer_id) REFERENCES Customers(customer_id) ON DELETE CASCADE ON UPDATE CASCADE
);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/SQLKEY01B?tab=Help
// Solved on: 2026-10-02T18:09:18.524Z

-- Write a DELETE query to delete John Doe's details from Customers table and see changes in Orders t
DELETE FROM Customers WHERE customer_name = 'John Doe';

SELECT * FROM Orders;
