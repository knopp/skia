

/**************************************************************************************************
 *** This file was autogenerated from GrSectionEmitCode.fp; do not modify.
 **************************************************************************************************/
#ifndef GrSectionEmitCode_DEFINED
#define GrSectionEmitCode_DEFINED

#include "include/core/SkM44.h"
#include "include/core/SkTypes.h"


#include "src/gpu/GrFragmentProcessor.h"

class GrSectionEmitCode : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make() {
        return std::unique_ptr<GrFragmentProcessor>(new GrSectionEmitCode());
    }
    GrSectionEmitCode(const GrSectionEmitCode& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "SectionEmitCode"; }
    bool usesExplicitReturn() const override;
private:
    GrSectionEmitCode()
    : INHERITED(kGrSectionEmitCode_ClassID, kNone_OptimizationFlags) {
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
#if GR_TEST_UTILS
    SkString onDumpInfo() const override;
#endif
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    using INHERITED = GrFragmentProcessor;
};
#endif
