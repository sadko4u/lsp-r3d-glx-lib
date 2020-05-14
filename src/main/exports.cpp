/*
 * exports.cpp
 *
 *  Created on: 3 мая 2020 г.
 *      Author: sadko
 */

#include <lsp-plug.in/common/types.h>
#include <lsp-plug.in/r3d/glx/factory.h>

namespace lsp
{
    namespace glx
    {
        factory_t   factory;

        LSP_R3D_GLX_LIB_CEXPORT
        LSP_DEFINE_VERSION_FUNC(LSP_R3D_GLX_LIB)

        LSP_R3D_GLX_LIB_CEXPORT
        LSP_R3D_FACTORY_FUNCTION_HEADER
        {
            return &lsp::glx::factory;
        }
    }
}
