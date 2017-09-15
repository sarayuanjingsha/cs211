#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  string input;
  int team[26]={0};
  double score[26]={0};
  double team_score[26]={0};

  cout<<"Please input a string of Uppercase characters: ";
  getline(cin,input);
  for(int i=0; i<(int)input.length(); i++){
    switch(input[i]){
      case'A':team[0]++; score[0]+=i+1;
      break;
      case'B':team[1]++; score[1]+=i+1;
      break;
      case'C':team[2]++; score[2]+=i+1;
      break;
      case'D':team[3]++; score[3]+=i+1;
      break;
      case'E':team[4]++; score[4]+=i+1;
      break;
      case'F':team[5]++; score[5]+=i+1;
      break;
      case'G':team[6]++; score[6]+=i+1;
      break;
      case'H':team[7]++; score[7]+=i+1;
      break;
      case'I':team[8]++; score[8]+=i+1;
      break;
      case'J':team[9]++; score[9]+=i+1;
      break;
      case'K':team[10]++; score[10]+=i+1;
      break;
      case'L':team[11]++; score[11]+=i+1;
      break;
      case'M':team[12]++; score[12]+=i+1;
      break;
      case'N':team[13]++; score[13]+=i+1;
      break;
      case'O':team[14]++; score[14]+=i+1;
      break;
      case'P':team[15]++; score[15]+=i+1;
      break;
      case'Q':team[16]++; score[16]+=i+1;
      break;
      case'R':team[17]++; score[17]+=i+1;
      break;
      case'S':team[18]++; score[18]+=i+1;
      break;
      case'T':team[19]++; score[19]+=i+1;
      break;
      case'U':team[20]++; score[20]+=i+1;
      break;
      case'V':team[21]++; score[21]+=i+1;
      break;
      case'W':team[22]++; score[22]+=i+1;
      break;
      case'X':team[23]++; score[23]+=i+1;
      break;
      case'Y':team[24]++; score[24]+=i+1;
      break;
      case'Z':team[25]++; score[25]+=i+1;
      break;
      default:break;
    }
  }

  int team_num = 0;
  for(int j=0; j<26; j++){
    if(team[j]>0){
      team_num++;
    }
  }

  cout<<"There are "
      << team_num
      <<" teams."
      << endl;
  cout<<"Each team has "
      << input.length()/team_num
      <<" runners."
      <<endl;
  cout<<"Team  "
      <<"Score"
      <<endl;

  double lowest_score=team_score[0];
  char lowest_team=65;
  for(int m=0; m<26; m++){
    if(team[m]>0){
      team_score[m] = score[m] / (input.length()/team_num);
      cout<< (char)(m+65)
          << "      "
          << setprecision(3)
          << team_score[m]
          << endl;

    if(team_score[m]<team_score[0]){
      lowest_score =team_score[m];
      lowest_team = m+65;
    }
    }
  }

  cout<<"The winning team is team "
      << lowest_team
      <<" with a score of "
      << lowest_score
      << endl;
  
  return 0;

}
