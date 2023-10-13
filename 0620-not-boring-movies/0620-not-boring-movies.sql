# Write your MySQL query statement below
select id,movie,description,rating from cinema where not description = 'boring' and not id%2=0 order by rating desc;