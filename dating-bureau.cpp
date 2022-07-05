#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct man1
{
    int id;
    char name[20],Q[20],age[20],edu[20],city[20],special[20],date[20];
};
struct woman1
{
    int id1;
    char name[20],age[20],city[20],job[20],edu[20],con[20],date[20];
};

using namespace std;
class man;
class woman;
class Dating
{
    public:
   //int id=0,id1=0,
    int counter = 0;
};

class man:public Dating
{
    public:
    int manid= 0;
    struct man1 arr[10];
    void del_man()
    {
    	int n;
    	cout <<"Введите id:";
    	cin >> n;
    	if(n == manid)
    	{
    		--manid;
    	}
    }
    void add_man_info()
    {
        int i,en;
        cout<<"Какое количество людей вы хотите добавить: :";
        cin>>en;
        for(i=1;i<=en;i++)
        {
        cout<<"ID Мужчины                 :";
        cin>>arr[manid].id;
        cout<<"Имя мужчины              :";
        cin>>arr[manid].name;
        cout<<"Возраст мужмины             :";
        cin>>arr[manid].age;
        cout<<"Текущее положение     :";
        cin>>arr[manid].Q;
        cout<<"Работа     :";
        cin>>arr[manid].special;
        cout<<"Образование        :";
        cin>>arr[manid].edu;
        cout<<"Место проживание              :";
        cin>>arr[manid].city;
        manid++;
         counter++;
         cout<<"\n";
        cout<<"Вы заполнили все заявки "<<i<<" успешно"<<"\n";
        cout<<"Введите количество "<<" "<<i+1<<" "<<"людей"<<"\n";
        }
    }
    void Display()
    {
        system("cls");
        int n,i;
        cout<<"\n Введите идентификатор мужчины, чтобы отобразить запись :";
        cin>>n;
        if(n==0)
        {
            cout<<"\n\n                      OOPS!!!!             "<<"\n\n";
            cout<<"Note:-   Нет записи для отображения, пожалуйста, вернитесь и введите некоторые записи...... "<<"\n";
        }
        else
        {
            int status=0;
            for(i=0;i<manid;i++)
            {
                if(arr[i].id==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
                cout<<"\n\n";
                cout<<"1.ID Мужчины                 :"<<arr[i].id<<"\n";
                cout<<"2.Имя мужчины             :"<<arr[i].name<<"\n";
                cout<<"3.Возраст мужмины              :"<<arr[i].age<<"\n";
                cout<<"4.Текущее положение     :"<<arr[i].Q<<"\n";
                cout<<"5.Работа    :"<<arr[i].special<<"\n";
                cout<<"6.Образование        :"<<arr[i].edu<<"\n";
                cout<<"8.Место проживание             :"<<arr[i].city<<"\n";
                cout<<" \n Press Any KEY To choose another Option.... ";
            }
            else
            {
                cout<<" \n\n Нету такого ID в базе данных "<<endl;
                cout<<" \n Press Any KEY To choose another Option.... ";
            }
        }
         getch();
    }
void man_report()
  {
            system("cls");
            int i,n;
            cout<<"\n Введите идентификатор мужчины для отображения отчета :";
            cin>>n;
            int status=0;
            for(i=0;i< manid; i++)
            {
                if(arr[i].id==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
               cout<<"\n\n     ***  Отчёт мужчины ***    "<<"\n \n";
               cout<<       "1. Имя мужчины                   "<<arr[i].name<<"\n";
               cout<<       "2. Возраст мужчины                    "<<arr[i].age<<"\n";
               cout<<       "3. Работа                          "<<arr[i].special<<"\n";
               cout<<       "4. Текущее положение                            "<<arr[i].Q<<"\n";
               cout<<       "5. Назначенная встреча                "<<arr[manid].date<<"\n";
               cout<<       "6. Образование                       "<<arr[i].edu<<"\n";
               cout<<       "7.Место проживания                :"<<arr[i].city<<"\n";
               cout<<"Press Any Key To Go Back....";
            }
            else{
                cout<<" \n\n Нет такого ID в БД "<<endl;
                cout<<" \n Press Any KEY To choose another Option.... ";
             }

               getch();
        }

    void man_detail()
    {
        int i;
        if(manid==0)
        {
            cout<<" \n\n\n                                  OOPS!!!!             "<<"\n\n";
           cout<<"Нет записи для отображения, пожалуйста, вернитесь и введите некоторые записи...... "<<"\n";
        }
        else{
                cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t \t  Подробная информация обо всех мужчинах в БД \n";
        cout<<"********************************************************************************"<<"\n \n";

        cout<<"ID"<<"\t \t"<<"Работа"<<"\t \t"<<"Назначенная встреча"<<"\t \t"<<"Возраст";
        cout<<"\n \n";

        for(i=0;i<manid;i++)
         {
        cout<<arr[i].id<<"\t \t"<<arr[i].special<<"\t \t \t"<<arr[manid].date<<"\t  \t \t"<<arr[i].age<<"\n";
         }
         cout<<" \n Press Any Button To choose another Option.... ";
        }
        getch();
    }
    void tot_no_of_man()
    {
        system("cls");
        int i=counter;
        cout<<"Всего мужчин в базе данных : "<<i<<"\n";
        cout<<" \n Press Any Button To choose another Option.... ";
        getch();
    }
        void gen_man_report()
{
    system("cls");
    int i, n;
    cout << "\n Введите ID Мужчины :";
    cin >> n;
    int status = 0;
    for (i = 0; i < manid; i++)
    {
        if (arr[i].id == n)
        {
            status = 1;
            break;
        }
    }
    if (status)
    {
        cout << "\n\n     ***  Бюро знайомств ***    " << "\n \n";
        cout << "Введите дату:";
        cin>> arr[manid].date;
        cout << "Press Any Key To Go Back....";
    }

    else {
        cout << " \n\n Немає такої ідентификації в базі даних " << endl;
        cout << " \n Press Any KEY To choose another Option.... ";
    }
    getch();

}
};

class woman:public Dating
{
   public:
   int womid1= 0;
   struct woman1 arr[10];
   void add_wom_info();
   void del_wom();
   void  Display();
   void woman_report();
   void woman_detail();
   void tot_no_of_wom();
   void gen_wom_report();
};
void woman :: del_wom()
{
     int n;
	cout <<"Введите id:";
    	cin>>n;
  if(n== womid1) 
  {
  	--womid1;
  }
    	

	
	}
 void woman :: add_wom_info()
   {
        int i,en;
        cout<<"Какое количество людей вы хотите добавить: :";
        cin>>en;
        for(i=1;i<=en;i++)
        {
        cout<<" 1.ID Девушки                                 :";
        cin>>arr[womid1].id1;
        cout<<" 2. Имя Девушки                             :";
        cin>>arr[womid1].name;
        cout<<"3. Возраст девушки                               :";
        cin>>arr[womid1].age;
        cout<<" 4. Текущее положение                         :";
        cin>>arr[womid1].con;
        cout<<" 5. Работа                           :";
        cin>>arr[womid1].job;

        cout<<" 6. Образование             :";
        cin>>arr[womid1].edu;
        cout<<" 7. Место проживания             :";
        cin>>arr[womid1].city;
        womid1++;
        counter++;
        cout<<"\n";
        cout<<"Вы заполнили все заявки "<<i<<" успешно"<<"\n";
        cout<<"Введите количество "<<" "<<i+1<<" "<<"людей"<<"\n";
        }
   }
	
   void woman :: Display()
   {
        system("cls");
        int n,i;
        cout<<"\n Введите ID девушки чтобы просмотреть информацию :";
        cin>>n;
        if(n==0)
        {
            cout<<"\n\n                      OOPS!!!!             "<<"\n \n";
            cout<<"Нет записи для отображения, пожалуйста, вернитесь и введите некоторые записи...... "<<"\n";
            cout<<" \n Press Any KEY To choose another Option.... ";
        }
        else
        {
            int status=0;
            for(i=0;i<womid1;i++)
            {
                if(arr[i].id1==n)
                {
                    status=1;
                    break;
                }
            }
            if(status==1)
            {
            cout<<"1.ID девушки                                     :"<<arr[i].id1<<"\n";
            cout<<"2.Имя Девушки                                  :"<<arr[i].name<<"\n";
            cout<<"3.Возраст девушки                                   :"<<arr[i].age<<"\n";
            cout<<"4.Текущее положение                                :"<<arr[i].con<<"\n";
            cout<<"5.Работа                             :"<<arr[i].job<<"\n";
            cout<<"6.Образование                 :"<<arr[i].con<<"\n";
            cout<<"7.Место проживания            :"<<arr[i].city<<"\n";
            cout<<" \n Press Any KEY To choose another Option.... ";
           }
           else{
                cout<<" \n\n Нет такого ID в базе данных "<<endl;
                cout<<" \n Press Any KEY To choose another Option.... ";
             }
        }
    getch();
 }

 void woman :: woman_report()
  {
            system("cls");
            int i,n;
            cout<<"\n Введите идентификатор девушки для отображения отчета :";
            cin>>n;
            int status=0;
            for(i=0;i<womid1;i++)
            {
                if(arr[i].id1==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
               cout<<"\n\n     ***  Отчёт девушки ***    "<<"\n \n";
               cout<<       "1. Имя девушки                             "<<arr[i].name<<"\n";
               cout<<       "2. Возраст девушки                           "<<arr[i].age<<"\n";
               cout<<       "3. Работа                          "<<arr[i].job<<"\n";
               cout<<       "4. Текущее положение                            "<<arr[i].con<<"\n";
               cout<<       "5. Назначенная встреча                "<<arr[i].date<<"\n";
               cout<<       "6. Образование                       "<<arr[i].edu<<"\n";
               cout<<       "7.Место проживания                :"<<arr[i].city<<"\n";
               cout<<"Press Any Key To Go Back....";
            }
            else{
                cout<<" \n\n Нет такого ID в БД "<<endl;
                cout<<" \n Press Any KEY To choose another Option.... ";
             }

               getch();
        }

     void woman:: woman_detail()
     {
         int i;
          if(womid1==0)
          {
           cout<<" \n\n\n\n\n                                  OOPS!!!!             "<<"\n\n\n";
           cout<<"Нет записи для отображения, пожалуйста, вернитесь и введите некоторые записи...... "<<"\n";
          }
        else{
        cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t \t  Детали про всех девушек \n";
        cout<<"********************************************************************************"<<"\n \n";
        cout<<"ID"<<"\t \t"<<"Текущее положение"<<"\t \t"<<"Назначенная встреча"<<"\t \t"<<"Возраст";
        cout<<"\n \n";
        for(i=0;i<womid1;i++)
         {
          cout<<arr[i].id1<<"\t \t"<<arr[i].con<<"\t \t \t"<<arr[womid1].date<<"\t  \t \t\t"<<arr[i].age<<"\n";
         }
         cout<<" \n Press Any KEY To choose another Option.... ";
        }
        getch();
     }

     void woman :: tot_no_of_wom()
     {
        system("cls");
        int i=counter;
        cout<<"Всего девушек    :   "<<i<<"\n";
        cout<<" \n Press Any KEY To choose another Option.... ";
        getch();
     }

void woman::gen_wom_report()
{
    system("cls");
    int i, n;
    cout << "\n Введите ID девушки :";
    cin >> n;
    int status = 0;
    for (i = 0; i < womid1; i++)
    {
        if (arr[i].id1 == n)
        {
            status = 1;
            break;
        }
    }
    if (status)
    {
        cout << "\n\n     ***  Бюро знайомств ***    " << "\n \n";
        cout << "Назначить встречу:";
        cin>> arr[i].date;
        cout << "Press Any Key To Go Back....";
    }

    else {
        cout << " \n\n Немає такої ідентификації в базі даних " << endl;
        cout << " \n Press Any KEY To choose another Option.... ";
    }
    getch();
}
int main()
{
	setlocale(LC_ALL, "Russian");
    system("color B0");

    bool repeat= true;
    int ch1,ch2,ch3,ch4;
    man d;
    woman p;
     xyz:
     system("cls");
    cout<<"\n\n";
    cout<<"            *** Бюро знайомств ***    "<<"\n\n\n";
    cout<<"                   1. Меню :   "<<"\n\n";;
    cout<<"                   2. Вийти :   "<<"\n\n\n\n";
    cout<<"Enter Your Choice  :";
    cin>>ch1;
    cout<<"\n\n\n";

    if(ch1==1)
    {
         xyz2:
         system("cls");
         cout<<"\n\n";
         cout<<"   1.   Войти в базу данных Мужчин   "<<endl;
         cout<<"   2.   Войти в базу данных девушек   "<<endl;
         cout<<"   3.   Создание отчёта Девушек     "<<endl;
         cout<<"   4    Создание отчёта Мужчин    "<<endl;
         cout<<"   5.   EXIT                               "<<"\n";
         cout<<"Please  Enter Your choice  :"<<" ";
         cin>>ch2;
         while(repeat==true)
          {
           system("cls");
           switch(ch2)
           case 1:
            {
               cout<<"\n\n";
               cout<<"             *** База данных мужчин ***    "<<"\n \n \n\n";

               cout<<   "  \t       1. Добавить нового мужчину             "<<endl;
               cout<<   "  \t       2. Удалить мужчину из БД              "<<endl;
               cout<<   "  \t       3. Показать информацию о мужчине "<<endl;
               cout<<   "  \t       4. Показать всех мужчин    "<<endl;
               cout<<   "  \t       5. Назначить встречу    "<<endl;
               cout<<   "  \t       6. Кол.мужчин в БД      "<<endl;           
			   cout<<   "  \t       7. Exit                           "<<"\n";

               cout<<"Введите свой выбор :"<<" ";
               cin>>ch3;
               switch(ch3)
               {
                  case 1:
                   system("cls");
                   d.add_man_info();
                   break;
                   case 2:
                       d.del_man();
                       cout<<"\n";
                    break;

                   case 3:
                       system("cls");
                       d.Display();
                       break;

                   case 4:
                       d.man_detail();
                    break;

                    case 5:
                    	d.gen_man_report();
                        break;
                        
                        case 6:
                        d.tot_no_of_man();
						                        break;
                        case 7:
                        	goto xyz;
                        	break;

                   default:
                    cout<<"Неверно";
                }
                break;
        case 2:
             cout<<"\n\n";
               cout<<"       *** База данных девушек ***    "<<"\n \n";

               cout<<       "1. Добавить девушку             "<<endl;
               cout<<       "2. Удалить девушку из БД            "<<endl;
               cout<<       "3. Показать информацию о девушке "<<endl;
               cout<<       "4. Показать всех девушек     "<<endl;
               cout<<       "5. Назначить встречу     "<<endl;
               cout<<       "6  Кол.девушек в БД      "<<endl;
               cout<<       "7. EXIT                                      "<<"\n";
            

               cout<<"Введите свой выбор:"<<" ";
               cin>>ch4;
               switch(ch4)
               {
                  case 1:
                   system("cls");
                   p.add_wom_info();
                   break;
                   case 2:
                       p.del_wom();
                       cout<<"\n";
                    break;

                   case 3:
                       system("cls");
                       p.Display();
                       break;

                   case 4:
                       p.woman_detail();
                    break;

                    case 5:
                    		p.gen_wom_report();
                        break;
                        case 6:
                        p.tot_no_of_wom();
                        break;
                        case 7:
                        	goto xyz2;
                        break;
						
                   default:
                    cout<<"Неверно";
                    break;
                }
            break;
            case 3:

            p.woman_report();
            goto xyz2;
            break;
            case 4:
            	d.man_report();
                goto xyz2;
            break;
            case 5:
            	goto xyz;
            	break;

  }
 }
 }
 else if(ch1==2)
 {
     return 0;
 }
 else
 {
     cout<<"Неправильный ввод"<<endl;
 }
 return 0;
}
