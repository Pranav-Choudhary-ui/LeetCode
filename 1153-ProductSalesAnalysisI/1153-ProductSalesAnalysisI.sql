-- Last updated: 21/07/2026, 09:05:42
SELECT 
    product_name, year, price 
FROM 
    Sales AS s 
LEFT JOIN 
    Product AS p 
    ON s.product_id = p.product_id;