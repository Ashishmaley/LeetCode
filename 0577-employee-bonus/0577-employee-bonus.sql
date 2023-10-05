# Write your MySQL query statement below
SELECT name, bonus.bonus
FROM employee
left JOIN bonus ON employee.empId = bonus.empId
WHERE bonus.bonus < 1000 OR bonus.bonus IS NULL;