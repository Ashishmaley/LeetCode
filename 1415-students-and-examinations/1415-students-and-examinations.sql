# Write your MySQL query statement below
with ct1 as(
    select *
    from students cross join subjects 
),
ct2 as(
    select e.student_id, e.subject_name , count(subject_name) as count
    from examinations e
    group by e.student_id,e.subject_name 
)
SELECT ct1.student_id,ct1.student_name, ct1.subject_name, IFNULL(ct2.count, 0) AS attended_exams
from ct1 left join ct2
on ct1.student_id = ct2.student_id
and ct1.subject_name=ct2.subject_name
order by ct1.student_id,ct1.subject_name;