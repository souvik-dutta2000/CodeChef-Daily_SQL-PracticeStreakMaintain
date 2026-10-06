// Problem: GSQ72
// Platform: codechef
// Language: SELECT employee_id
    FROM employee AS e
    WHERE salary < 
        (SELECT AVG(salary)
        FROM employee
        WHERE department= e.department);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS04/problems/GSQ72?tab=solution
// Solved on: 2026-10-06T16:31:45.809Z

/* Write a query to retrieve the names of food items which cost less than the average cost of 'Continental' food type(f_type). */
SELECT f_name
FROM food as f
WHERE f_cost < 
    (SELECT avg(f_cost)
    FROM food
    WHERE f_type = 'Continental'
    );