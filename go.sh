DIR=minishell
RUN=./minishell
OUT=output/
TEST=susu.c

# COLORS
D=\\x1b[31m
P=\\x1b[35m
B=\\x1b[34m
L=\\x1b[36m
R=\\x1b[0m
G=\\x1b[32m
Y=\\x1b[33m

cd $DIR

echo "pwd > ../output/pwd" | ./minishell
echo "echo $PATH > ../output/path" | ./minishell
echo "/bin/ls > ../output/binls" | ./minishell
echo "echo -n > ../output/echo" | ./minishell
# echo "echo \"" > ../output/echo" | ./minishell
echo "echo $HOME > ../output/home" | ./minishell
echo "echo ab\"cd\"e > ../output/abcd" | ./minishell
echo "echo \"a ; echo b\";echo c > ../output/token" | ./minishell
echo "echo -n lala > ../output/lala" | ./minishell
echo "cd .." | echo "echo ok > ../output/cd" | ./minishell

echo "\n[mini]\n[bash]\n"


echo "$P---pwd---$R"
pwd >> ../output/pwd
cat ../output/pwd

echo "$P\n---path---$R"
echo $PATH >> ../output/path
cat ../output/path

echo "$P\n---binls---$R"
/bin/ls >> ../output/binls
cat ../output/binls

echo "$P\n---echo---$R"
echo -n >> ../output/echo
cat ../output/echo

echo "$P\n---home---$R"
echo $HOME >> ../output/home
cat ../output/home

echo "$P\n---lala---$R"
echo -n lala >> ../output/lala
cat -e ../output/lala

echo "$P\n---abcd---$R"
echo ab"cd"e >> ../output/abcd
cat -e ../output/abcd

echo "$P\n---token---$R"
echo "a ; echo b"; echo c >> ../output/token
cat -e ../output/token

echo "$P\n---cd---$R"
cd .. | echo ls > ../output/cd
cat -e ../output/cd



#test_errors:
	# sh ../errors.sh