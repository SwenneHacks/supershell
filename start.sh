# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    start.sh                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2022/03/17 11:32:29 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

source srcs/pretty.sh

echo " ---------------------------------------"
echo "|					|"
echo "|	 $P HELLO $Y MOTHA $L FAWAKAAA	$R|"
echo "|					|"
echo "|	 welcome to my supershell	|"
echo "|	    testing framework		|"
echo "|					|"
echo "|					|"
echo "|	  		     $G  Powered$R  |"
echo "|	   	             $G by$B Swenne.$R|"
echo " ---------------------------------------"


echo "$D \n  Now running tests in your Minishell:$R"

read -r -p "    Question: are you ready? [y/n]" input

case $input in
	[yY])
		sh go.sh
	;;
	[nN])
		echo "	Ok, goodbye ;)"
		exit 1
	;;
	*)
		echo "	byeeeeee."
		exit 1
esac