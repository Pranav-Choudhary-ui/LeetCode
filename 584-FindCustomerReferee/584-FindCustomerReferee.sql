-- Last updated: 21/07/2026, 09:06:19
SELECT
    name
FROM
    Customer
WHERE
    referee_id IS NULL OR referee_id <> 2;