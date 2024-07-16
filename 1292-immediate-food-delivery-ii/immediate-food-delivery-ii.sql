select ROUND(SUM(IF(ct.o_date = ct.d_date,1,0))*100/
(select COUNT(DISTINCT(customer_id)) from Delivery)
,2) as immediate_percentage
from
(select customer_id, MIN(order_date) as o_date , 
MIN(customer_pref_delivery_date) as d_date from Delivery 
group by customer_id
order by customer_id) as ct