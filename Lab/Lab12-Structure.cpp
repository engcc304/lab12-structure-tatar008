/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/
#include <stdio.h>

struct Student {
        char Name[50] ;
        char LastName[50] ;
        int ID ;
        int ScoreSub1 ;
        int ScoreSub2 ;
        int ScoreSub3 ;
        int ScoreSub4 ;
        int ScoreSub5 ;
    } typedef S ;

void Grades( int score ) {
    printf( " " ) ;
    if( score >= 80 ) printf( " A" ) ; 
    else if( score >= 75 && score < 80 ) printf( "B+" ) ; 
    else if( score >= 70 && score < 75 ) printf( " B" ) ; 
    else if( score >= 65 && score < 70 ) printf( "C+" ) ; 
    else if( score >= 60 && score < 65 ) printf( " C" ) ; 
    else if( score >= 55 && score < 60 ) printf( "D+" ) ; 
    else if( score >= 50 && score < 55 ) printf( " D" ) ; 
    else printf( " F" ) ;

}//end void

int main() {

	printf( "\nStudent Details: \n" ) ;
    S person[ 3 ] ;
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d:\n", i+1 ) ;
        printf( "Name & LastName : " ) ;
        scanf( "%s %s", person[i].Name, person[i].LastName ) ; 

        printf ( "Id: " ) ;
        scanf( "%d", &person[i].ID ) ;

        printf( "Scores in Subject 1: \n" ) ;
        scanf( "%d", &person[i].ScoreSub1 ) ;

        printf( "Scores in Subject 2: \n" ) ;
        scanf( "%d", &person[i].ScoreSub2 ) ;

        printf( "Scores in Subject 3: \n" ) ;
        scanf( "%d", &person[i].ScoreSub3 ) ;

        printf( "Scores in Subject 4: \n" ) ;
        scanf( "%d", &person[i].ScoreSub4 ) ;

        printf( "Scores in Subject 5: \n" ) ;
        scanf( "%d", &person[i].ScoreSub5 ) ;

    }//end for

    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "\nStudent %d\n", i+1 ) ;
        printf( "Name: %s %s\n", person[i].Name, person[i].LastName ) ;
        printf( "ID: %d\n", person[i].ID ) ;
        printf( "Scores: %d %d %d %d %d\n", person[i].ScoreSub1, person[i].ScoreSub2, person[i].ScoreSub3, person[i].ScoreSub4, person[i].ScoreSub5 ) ;
        printf( "Grades:" ) ;
        Grades( person[i].ScoreSub1 ) ;
        Grades( person[i].ScoreSub2 ) ;
        Grades( person[i].ScoreSub3 ) ;
        Grades( person[i].ScoreSub4 ) ;
        Grades( person[i].ScoreSub5 ) ;
        float Avg = person[i].ScoreSub1 + person[i].ScoreSub2 + person[i].ScoreSub3 + person[i].ScoreSub4 + person[i].ScoreSub5 ; 

        printf( "\nAverage Scores: %.1f", Avg/5 ) ;
    }//end for

    return 0 ;
}//end main function