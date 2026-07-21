-- Last updated: 21/07/2026, 09:07:10
SELECT 
    a.id 
FROM 
    Weather a
JOIN 
    Weather b 
    ON a.recordDate = DATE_ADD(b.recordDate, INTERVAL 1 DAY)
WHERE 
    a.temperature > b.temperature;
