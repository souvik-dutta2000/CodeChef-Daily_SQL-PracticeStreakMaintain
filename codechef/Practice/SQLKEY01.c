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
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/SQLKEY01
// Solved on: 2026-10-02T17:52:23.875Z

// source not captured automatically - copy it from the editor and use Manual Push