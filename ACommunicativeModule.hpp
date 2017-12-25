#ifndef ACOMMUNICATIVEMODULE_HPP
# define ACOMMUNICATIVEMODULE_HPP

# include <Stream.h>
# include "IModule.hpp"
//# include "ICommunicator.hpp"

namespace woodBox {
    namespace module {
        class ACommunicativeModule : public IModule {
            public:
                ACommunicativeModule(Stream *);
                ACommunicativeModule(ACommunicativeModule &);
                virtual ACommunicativeModule &operator=(ACommunicativeModule &);
                virtual ~ACommunicativeModule();
                virtual void run() = 0;
                virtual void stop() = 0;
                virtual const Stream *getCommunicator();
                virtual void setCommunicator(Stream *);
            protected:
                Stream    *_stream;
        };
    }
}

#endif /* ACOMMUNICATIVEMODULE_HPP */
