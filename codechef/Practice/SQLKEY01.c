// Problem: SQLKEY01
// Platform: codechef
// Language: CREATE TABLE parent_table (
    parent_column_id INT PRIMARY KEY,
    parent_column1 VARCHAR(255),
    parent_column2 VARCHAR(255) UNIQUE, -- Unique constraint on a single column
    parent_column3 INT,
    UNIQUE (parent_column1, parent_column3) -- Composite Unique constraint
);

CREATE TABLE child_table (
    child_column_id INT PRIMARY KEY,
    child_column1 VARCHAR(255),
    parent_column_id INT,
    FOREIGN KEY (parent_column_id) REFERENCES parent_table(parent_column_id) -- Foreign key constraint
);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/SQLKEY01?tab=solution
// Solved on: 2026-10-02T18:00:03.606Z

-- Write the SQL query to create the tables given above (Customers & Orders) with the given constraints like primary key, unique key, foreign key (do not insert data into the table).
CREATE TABLE Customers (
    Customer_id INT PRIMARY KEY,
    customer_name VARCHAR(255),
   city VARCHAR(255), -- Unique constraint on a single column
   customer_email VARCHAR(30)Unique
   
);

CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    Customer_id INT
   order_date date,
   amount decimal(10.2),
    FOREIGN KEY (Customer_id) REFERENCES Customers(Customer_id) -- Foreign key constraint
);