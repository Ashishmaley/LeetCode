# Write your MySQL query statement below
select t2.name as Employee from Employee t1
inner join Employee t2
on t1.id = t2.managerId
where t2.salary > t1.salary;