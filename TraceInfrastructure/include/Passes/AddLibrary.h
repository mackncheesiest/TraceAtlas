#pragma once
#include <llvm/Pass.h>
#include <llvm/IR/Function.h>

using namespace llvm;

namespace DashTracer
{
    namespace Passes
    {

        struct AddLibrary : public FunctionPass
        {
            static char ID;
            AddLibrary() : FunctionPass(ID) {}
            bool runOnFunction(Function &F) override;
            void getAnalysisUsage(AnalysisUsage &AU) const override;
            bool doInitialization(Module &M) override;
        };

    } // namespace Passes
} // namespace DashTracer
