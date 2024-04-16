
#pragma once

#include "CoreMinimal.h"

#include "CodeCommand.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType, Blueprintable)
struct UE5_TRAINING_API FCodeCommand
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CodeCommand Struct")
	FString Command;

	bool CheckCommandInput(const char& input, const int& index);
	bool CheckCommand(const FString& command);

};

class CodeCommandUtility
{
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool CheckCommandInput(FCodeCommand& codeCommand, const char& input, const int& index);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool CheckCommand(FCodeCommand& codeCommand, const FString& command);
};
