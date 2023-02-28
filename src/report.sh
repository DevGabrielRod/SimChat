#!/bin/bash
##Programa Gerador de Relatorios.

project="SimChat"
version="1.0.1"
date="02-03-23"

echo "Programa Gerador de Relatorios \n shell:Bash"

echo " "
echo "Insira o Nome do Projeto:"
read project

echo " "
echo "Insira a Versao:"
read version

echo " "
echo "Insira a data do relatorio:"
read date

touch "$project-$date.rep" 

echo " "
archname="$project$date.rep"

echo " "
echo "$project" >> $archname
echo "$version" >> $archname
echo "$date" >> $archname
nano $archname

echo "Relatorio gerado com Sucesso:"
echo $archname