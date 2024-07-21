# Write your MySQL query statement below
select person_name from Queue as q
where 1000>=(
    select sum(weight) from queue where q.turn >= turn
    )
order by turn desc limit 1;