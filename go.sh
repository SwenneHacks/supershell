DIR=../minishell
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

echo "pwd > ../supershell/output/pwd" | ./minishell
echo "echo $PATH > ../supershell/output/path" | ./minishell
echo "/bin/ls > ../supershell/output/binls" | ./minishell
echo "echo -n > ../supershell/output/echo" | ./minishell
# echo "echo \"" > ../supershell/output/echo" | ./minishell
echo "echo $HOME > ../supershell/output/home" | ./minishell
echo "echo ab\"cd\"e > ../supershell/output/abcd" | ./minishell
echo "echo \"a ; echo b\";echo c > ../supershell/output/token" | ./minishell
echo "echo -n lala > ../supershell/output/lala" | ./minishell
echo "echo \"echo $?\" > ../supershell/output/s?" | ./minishell

echo "\n[mini]\n[bash]\n"

echo "$P---pwd---$R"
pwd >> ../supershell/output/pwd
cat ../supershell/output/pwd

echo "$P\n---path---$R"
echo $PATH >> ../supershell/output/path
cat ../supershell/output/path

echo "$P\n---binls---$R"
/bin/ls >> ../supershell/output/binls
cat ../supershell/output/binls

echo "$P\n---echo---$R"
echo -n >> ../supershell/output/echo
cat ../supershell/output/echo

echo "$P\n---home---$R"
echo $HOME >> ../supershell/output/home
cat ../supershell/output/home

echo "$P\n---lala---$R"
echo -n lala >> ../supershell/output/lala
cat -e ../supershell/output/lala

echo "$P\n---abcd---$R"
echo ab"cd"e >> ../supershell/output/abcd
cat -e ../supershell/output/abcd

echo "$P\n---token---$R"
echo "a ; echo b"; echo c >> ../supershell/output/token
cat -e ../supershell/output/token

echo "$P\n---cd---$R"
echo $? >> ../supershell/output/s?
cat -e ../supershell/output/s?



#test_errors:
	# sh ../errors.sh