/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Raiser.h"

#include "Raiser.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* RaiserAsyncClient::getServiceName() {
  return "Raiser";
}

void RaiserAsyncClient::doBland(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  doBland(rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doBland(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      doBlandT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      doBlandT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_doBland() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_doBland(rpcOptions);
}

void RaiserAsyncClient::sync_doBland(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  std::unique_ptr<apache::thrift::RequestCallback> callback0(new apache::thrift::ClientSyncCallback(&_returnState, getChannel()->getEventBase(), false));
  doBland(rpcOptions, std::move(callback0));
  getChannel()->getEventBase()->loopForever();
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_doBland(_returnState);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doBland() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_doBland(rpcOptions);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doBland(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise1;
  auto future2 = promise1.getFuture();
  std::unique_ptr<apache::thrift::RequestCallback> callback3(new apache::thrift::FutureCallback<folly::Unit>(std::move(promise1), recv_wrapped_doBland, channel_));
  doBland(rpcOptions, std::move(callback3));
  return std::move(future2);
}

void RaiserAsyncClient::doBland(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  doBland(std::unique_ptr<apache::thrift::RequestCallback>(new apache::thrift::FunctionReplyCallback(std::move(callback))));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_doBland(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_doBlandT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_doBlandT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_doBland(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_doBland(state);
  if (ew) {
    ew.throwException();
  }
}

void RaiserAsyncClient::recv_instance_doBland(::apache::thrift::ClientReceiveState& state) {
  recv_doBland(state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_doBland(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_doBland(state);
}

void RaiserAsyncClient::doRaise(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  doRaise(rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doRaise(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      doRaiseT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      doRaiseT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_doRaise() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_doRaise(rpcOptions);
}

void RaiserAsyncClient::sync_doRaise(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  std::unique_ptr<apache::thrift::RequestCallback> callback4(new apache::thrift::ClientSyncCallback(&_returnState, getChannel()->getEventBase(), false));
  doRaise(rpcOptions, std::move(callback4));
  getChannel()->getEventBase()->loopForever();
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_doRaise(_returnState);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doRaise() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_doRaise(rpcOptions);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doRaise(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise5;
  auto future6 = promise5.getFuture();
  std::unique_ptr<apache::thrift::RequestCallback> callback7(new apache::thrift::FutureCallback<folly::Unit>(std::move(promise5), recv_wrapped_doRaise, channel_));
  doRaise(rpcOptions, std::move(callback7));
  return std::move(future6);
}

void RaiserAsyncClient::doRaise(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  doRaise(std::unique_ptr<apache::thrift::RequestCallback>(new apache::thrift::FunctionReplyCallback(std::move(callback))));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_doRaise(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_doRaiseT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_doRaiseT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_doRaise(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_doRaise(state);
  if (ew) {
    ew.throwException();
  }
}

void RaiserAsyncClient::recv_instance_doRaise(::apache::thrift::ClientReceiveState& state) {
  recv_doRaise(state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_doRaise(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_doRaise(state);
}

void RaiserAsyncClient::get200(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  get200(rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get200(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      get200T(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      get200T(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_get200(std::string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_get200(rpcOptions, _return);
}

void RaiserAsyncClient::sync_get200(apache::thrift::RpcOptions& rpcOptions, std::string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  std::unique_ptr<apache::thrift::RequestCallback> callback8(new apache::thrift::ClientSyncCallback(&_returnState, getChannel()->getEventBase(), false));
  get200(rpcOptions, std::move(callback8));
  getChannel()->getEventBase()->loopForever();
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_get200(_return, _returnState);
}

folly::Future<std::string> RaiserAsyncClient::future_get200() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_get200(rpcOptions);
}

folly::Future<std::string> RaiserAsyncClient::future_get200(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> promise9;
  auto future10 = promise9.getFuture();
  std::unique_ptr<apache::thrift::RequestCallback> callback11(new apache::thrift::FutureCallback<std::string>(std::move(promise9), recv_wrapped_get200, channel_));
  get200(rpcOptions, std::move(callback11));
  return std::move(future10);
}

void RaiserAsyncClient::get200(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  get200(std::unique_ptr<apache::thrift::RequestCallback>(new apache::thrift::FunctionReplyCallback(std::move(callback))));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_get200T(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_get200T(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_get200(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void RaiserAsyncClient::recv_instance_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_get200(_return, state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_get200(_return, state);
}

void RaiserAsyncClient::get500(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  get500(rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get500(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      get500T(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      get500T(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_get500(std::string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_get500(rpcOptions, _return);
}

void RaiserAsyncClient::sync_get500(apache::thrift::RpcOptions& rpcOptions, std::string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  std::unique_ptr<apache::thrift::RequestCallback> callback12(new apache::thrift::ClientSyncCallback(&_returnState, getChannel()->getEventBase(), false));
  get500(rpcOptions, std::move(callback12));
  getChannel()->getEventBase()->loopForever();
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_get500(_return, _returnState);
}

folly::Future<std::string> RaiserAsyncClient::future_get500() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_get500(rpcOptions);
}

folly::Future<std::string> RaiserAsyncClient::future_get500(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> promise13;
  auto future14 = promise13.getFuture();
  std::unique_ptr<apache::thrift::RequestCallback> callback15(new apache::thrift::FutureCallback<std::string>(std::move(promise13), recv_wrapped_get500, channel_));
  get500(rpcOptions, std::move(callback15));
  return std::move(future14);
}

void RaiserAsyncClient::get500(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  get500(std::unique_ptr<apache::thrift::RequestCallback>(new apache::thrift::FunctionReplyCallback(std::move(callback))));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_get500T(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_get500T(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_get500(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void RaiserAsyncClient::recv_instance_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_get500(_return, state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_get500(_return, state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift