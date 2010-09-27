#ifndef PEERMANAGER_IGET_CHUNK_RESULT_H
#define PEERMANAGER_IGET_CHUNK_RESULT_H

#include <QObject>
#include <QIODevice>

#include <Protos/core_protocol.pb.h>

namespace PM
{
   class IGetChunkResult : public QObject
   {
      Q_OBJECT
   public:
      virtual ~IGetChunkResult() {}
      virtual void start() = 0;

   signals:
      void result(QIODevice* device);
   };
}
#endif