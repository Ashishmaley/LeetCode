# Write your MySQL query statement below
select EmployeeUNI.unique_Id,Employees.name from Employees
left join EmployeeUNI
on EmployeeUNI.id = Employees.id;