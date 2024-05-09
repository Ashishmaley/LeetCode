# Write your MySQL query statement below
select email from (select email,count(email) as count from Person
group by email) t1 where t1.count>1;