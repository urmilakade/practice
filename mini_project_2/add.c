#include"header.h"

void add_data(employee_database **emp)
{
	employee_database *temp = (employee_database *)malloc(sizeof(employee_database));

	temp = new_employee_detail(temp);
	if(*emp == NULL)
	{
		temp-> link = *emp;
		*emp = temp;
	}
	else
	{
		employee_database *last=*emp;
		while(last->link != NULL)
			last = last->link;
		 temp->link = last->link;
		 last->link = temp;
	}
	add_data_component(temp);
}

employee_database* new_employee_detail(employee_database *temp)
{
        printf("Enter the Employee details\n");
        printf("Enter the Employee Id\t:\t");
        scanf("%s",temp->emp_id);
        printf("Enter the Employee Name \t:\t");
        scanf(" %[^\n]s",temp->name);
        printf("Enter the Employee Gender \t:\t");
        scanf("%s",temp->gender);
        printf("Enter the Employee Email_ID\t:\t");
        scanf("%s",temp->email_id);
        printf("Enter the Employee Band \t:\t");
        scanf("%s",temp->band);
        printf("Enter the Employee Date of joining \t:\t");
        scanf("%s",temp->doj);
        printf("Enter the Employee Status \t:\t");
        scanf("%s",temp->status);
        printf("Enter the Employee Mobile Number \t:\t");
        scanf("%s",temp->contact_no);
        printf("Enter the Reporting Manager Name \t:\t");
        scanf(" %[^\n]s",temp->reporting_manager);
        printf("Enter the Reportee \t:\t");
        scanf(" %[^\n]s",temp->reportees);
        printf("Enter the Technical Area \t:\t");
        scanf(" %[^\n]s",temp->tech_area);
        printf("Enter the Project Information \t:\t");
        scanf("%s",temp->project_info);
	return temp;
}
/*
void add_data_component(employee_database *emp)
{
        FILE *fp = fopen("TS_Employee_DB.csv","r+");
        if(fp == NULL)
        {
                printf("FIle is not there\n");
                return ;
        }
        fseek(fp,0,SEEK_END);
        fprintf(fp,"%s,%s%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",emp->emp_id,emp->name,emp->gender,emp->email_id,emp->band,emp->doj,emp->status,emp->contact_no,emp->reporting_manager,emp->reportees,emp->tech_area,emp->project_info);
        rewind(fp);
        fclose(fp);
}
*/
