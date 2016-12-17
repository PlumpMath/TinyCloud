// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: master.proto

#include "master.pb.h"
#include "master.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace master {

static const char* Master_method_names[] = {
  "/master.Master/GetUserAddr",
  "/master.Master/CreateUser",
};

std::unique_ptr< Master::Stub> Master::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Master::Stub> stub(new Master::Stub(channel));
  return stub;
}

Master::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetUserAddr_(Master_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateUser_(Master_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Master::Stub::GetUserAddr(::grpc::ClientContext* context, const ::master::UserNameRequest& request, ::master::AddressReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetUserAddr_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::master::AddressReply>* Master::Stub::AsyncGetUserAddrRaw(::grpc::ClientContext* context, const ::master::UserNameRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::master::AddressReply>(channel_.get(), cq, rpcmethod_GetUserAddr_, context, request);
}

::grpc::Status Master::Stub::CreateUser(::grpc::ClientContext* context, const ::master::UserNameRequest& request, ::master::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateUser_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::master::Empty>* Master::Stub::AsyncCreateUserRaw(::grpc::ClientContext* context, const ::master::UserNameRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::master::Empty>(channel_.get(), cq, rpcmethod_CreateUser_, context, request);
}

Master::Service::Service() {
  (void)Master_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      Master_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Master::Service, ::master::UserNameRequest, ::master::AddressReply>(
          std::mem_fn(&Master::Service::GetUserAddr), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Master_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Master::Service, ::master::UserNameRequest, ::master::Empty>(
          std::mem_fn(&Master::Service::CreateUser), this)));
}

Master::Service::~Service() {
}

::grpc::Status Master::Service::GetUserAddr(::grpc::ServerContext* context, const ::master::UserNameRequest* request, ::master::AddressReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Master::Service::CreateUser(::grpc::ServerContext* context, const ::master::UserNameRequest* request, ::master::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace master

