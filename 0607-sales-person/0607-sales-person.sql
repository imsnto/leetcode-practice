# Write your MySQL query statement below
-- select s.name 
-- from salesperson s

select s.name 
from salesperson s
where s.sales_id NOT IN(
    select 
        distinct o.sales_id
    from 
        orders o
     join 
        company c on c.com_id = o.com_id
    where 
        c.name = 'RED'
    group by 
        o.sales_id
)
