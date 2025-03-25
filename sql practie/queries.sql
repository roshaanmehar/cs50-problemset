select province_id, sum(height) as sum_height from patients group by province_id having sum(height) >= 7000;
select (max(weight) - min(weight)) as weight_delta from patients where last_name = 'Maroni';

select (day(admission_date) as day_number, count(patient_id) as number_of_admissions group by day(admission_date)) from admissions order by number_of_admissions;