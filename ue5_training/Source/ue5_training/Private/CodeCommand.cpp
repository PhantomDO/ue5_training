// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeCommand.h"

bool FCodeCommand::CheckCommandInput(const char& input, const int& index)
{
	if (Command.IsEmpty())
	{
		return false;
	}

	if (index >= Command.Len())
	{
		return false;
	}

	return input == Command[index];
}

bool FCodeCommand::CheckCommand(const FString& command)
{
	if (command.IsEmpty())
	{
		return false;
	}

	// compare the two string to know if the sequence is the same.
	return command.Equals(Command, ESearchCase::CaseSensitive);
}

bool CodeCommandUtility::CheckCommandInput(FCodeCommand& codeCommand, const char& input, const int& index)
{
	return codeCommand.CheckCommandInput(input, index);
}

bool CodeCommandUtility::CheckCommand(FCodeCommand& codeCommand, const FString& command)
{
	return codeCommand.CheckCommand(command);;
}