# Write your MySQL query statement below

select distinct Visits.customer_id,count(Visits.customer_id)as count_no_trans from Visits 
where visit_id not in 
(select visit_id from Transactions)
group by Visits.customer_id;