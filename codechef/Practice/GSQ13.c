// Problem: GSQ13
// Platform: codechef
// Language: CREATE TABLE  student(
     student_id INTEGER PRIMARY KEY,
     student_Name TEXT UNIQUE,
     department TEXT NOT NULL CHECK (department IN ('CSE', 'ECE', 'EEE')));
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ13?tab=solution
// Solved on: 2026-10-14T18:12:21.859Z

/* Write a query to create a table employee with the mentioned constraints on the columns : 
employee_id - PRIMARY KEY, 
employee_Name -UNIQUE, 
department -NOT NULL CHECK (department IN ('Sales', 'Finance', 'Operations')) */
 CREATE TABLE  employee(
     employee_id INTEGER PRIMARY KEY,
     employee_Name TEXT UNIQUE,
     department TEXT NOT NULL CHECK (department IN ('Sales', 'Finance', 'Operations'))
  );