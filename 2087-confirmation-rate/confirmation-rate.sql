# Write your MySQL query statement below
select s.user_id,round(avg(case when c.action="confirmed" then 1 else 0 end),2) 
as confirmation_rate from SignUps s
left join Confirmations c
on s.user_id = c.user_id
group by user_id;
