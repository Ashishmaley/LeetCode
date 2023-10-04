# Write your MySQL query statement below
select v.customer_id,count(visit_id) as count_no_trans
from Visits v where not exists (
    select visit_id from Transactions t
    where v.visit_id=t.visit_id  
)
group by customer_id
