// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: synch.proto
#ifndef GRPC_synch_2eproto__INCLUDED
#define GRPC_synch_2eproto__INCLUDED

#include "synch.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace synch {

class SNSSynchronizer final {
 public:
  static constexpr char const* service_full_name() {
    return "synch.SNSSynchronizer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status newFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::synch::syncRep* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> AsyncnewFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(AsyncnewFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> PrepareAsyncnewFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(PrepareAsyncnewFollowRaw(context, request, cq));
    }
    virtual ::grpc::Status newUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::synch::syncRep* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> AsyncnewUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(AsyncnewUsersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> PrepareAsyncnewUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(PrepareAsyncnewUsersRaw(context, request, cq));
    }
    virtual ::grpc::Status newPost(::grpc::ClientContext* context, const ::synch::Message& request, ::synch::syncRep* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> AsyncnewPost(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(AsyncnewPostRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>> PrepareAsyncnewPost(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>>(PrepareAsyncnewPostRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void newFollow(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) = 0;
      virtual void newFollow(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void newUsers(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) = 0;
      virtual void newUsers(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void newPost(::grpc::ClientContext* context, const ::synch::Message* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) = 0;
      virtual void newPost(::grpc::ClientContext* context, const ::synch::Message* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* AsyncnewFollowRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* PrepareAsyncnewFollowRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* AsyncnewUsersRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* PrepareAsyncnewUsersRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* AsyncnewPostRaw(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::synch::syncRep>* PrepareAsyncnewPostRaw(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status newFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::synch::syncRep* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> AsyncnewFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(AsyncnewFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> PrepareAsyncnewFollow(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(PrepareAsyncnewFollowRaw(context, request, cq));
    }
    ::grpc::Status newUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::synch::syncRep* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> AsyncnewUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(AsyncnewUsersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> PrepareAsyncnewUsers(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(PrepareAsyncnewUsersRaw(context, request, cq));
    }
    ::grpc::Status newPost(::grpc::ClientContext* context, const ::synch::Message& request, ::synch::syncRep* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> AsyncnewPost(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(AsyncnewPostRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>> PrepareAsyncnewPost(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::synch::syncRep>>(PrepareAsyncnewPostRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void newFollow(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) override;
      void newFollow(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) override;
      void newUsers(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) override;
      void newUsers(::grpc::ClientContext* context, const ::synch::syncReq* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) override;
      void newPost(::grpc::ClientContext* context, const ::synch::Message* request, ::synch::syncRep* response, std::function<void(::grpc::Status)>) override;
      void newPost(::grpc::ClientContext* context, const ::synch::Message* request, ::synch::syncRep* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* AsyncnewFollowRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* PrepareAsyncnewFollowRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* AsyncnewUsersRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* PrepareAsyncnewUsersRaw(::grpc::ClientContext* context, const ::synch::syncReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* AsyncnewPostRaw(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::synch::syncRep>* PrepareAsyncnewPostRaw(::grpc::ClientContext* context, const ::synch::Message& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_newFollow_;
    const ::grpc::internal::RpcMethod rpcmethod_newUsers_;
    const ::grpc::internal::RpcMethod rpcmethod_newPost_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status newFollow(::grpc::ServerContext* context, const ::synch::syncReq* request, ::synch::syncRep* response);
    virtual ::grpc::Status newUsers(::grpc::ServerContext* context, const ::synch::syncReq* request, ::synch::syncRep* response);
    virtual ::grpc::Status newPost(::grpc::ServerContext* context, const ::synch::Message* request, ::synch::syncRep* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_newFollow() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewFollow(::grpc::ServerContext* context, ::synch::syncReq* request, ::grpc::ServerAsyncResponseWriter< ::synch::syncRep>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_newUsers() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewUsers(::grpc::ServerContext* context, ::synch::syncReq* request, ::grpc::ServerAsyncResponseWriter< ::synch::syncRep>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_newPost() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewPost(::grpc::ServerContext* context, ::synch::Message* request, ::grpc::ServerAsyncResponseWriter< ::synch::syncRep>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_newFollow<WithAsyncMethod_newUsers<WithAsyncMethod_newPost<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_newFollow() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::synch::syncReq, ::synch::syncRep>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::synch::syncReq* request, ::synch::syncRep* response) { return this->newFollow(context, request, response); }));}
    void SetMessageAllocatorFor_newFollow(
        ::grpc::MessageAllocator< ::synch::syncReq, ::synch::syncRep>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::synch::syncReq, ::synch::syncRep>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newFollow(
      ::grpc::CallbackServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_newUsers() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::synch::syncReq, ::synch::syncRep>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::synch::syncReq* request, ::synch::syncRep* response) { return this->newUsers(context, request, response); }));}
    void SetMessageAllocatorFor_newUsers(
        ::grpc::MessageAllocator< ::synch::syncReq, ::synch::syncRep>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::synch::syncReq, ::synch::syncRep>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newUsers(
      ::grpc::CallbackServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_newPost() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::synch::Message, ::synch::syncRep>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::synch::Message* request, ::synch::syncRep* response) { return this->newPost(context, request, response); }));}
    void SetMessageAllocatorFor_newPost(
        ::grpc::MessageAllocator< ::synch::Message, ::synch::syncRep>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::synch::Message, ::synch::syncRep>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newPost(
      ::grpc::CallbackServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_newFollow<WithCallbackMethod_newUsers<WithCallbackMethod_newPost<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_newFollow() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_newUsers() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_newPost() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_newFollow() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewFollow(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_newUsers() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewUsers(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_newPost() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestnewPost(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_newFollow() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->newFollow(context, request, response); }));
    }
    ~WithRawCallbackMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newFollow(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_newUsers() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->newUsers(context, request, response); }));
    }
    ~WithRawCallbackMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newUsers(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_newPost() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->newPost(context, request, response); }));
    }
    ~WithRawCallbackMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* newPost(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_newFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_newFollow() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::synch::syncReq, ::synch::syncRep>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::synch::syncReq, ::synch::syncRep>* streamer) {
                       return this->StreamednewFollow(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_newFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status newFollow(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamednewFollow(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::synch::syncReq,::synch::syncRep>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_newUsers : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_newUsers() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::synch::syncReq, ::synch::syncRep>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::synch::syncReq, ::synch::syncRep>* streamer) {
                       return this->StreamednewUsers(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_newUsers() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status newUsers(::grpc::ServerContext* /*context*/, const ::synch::syncReq* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamednewUsers(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::synch::syncReq,::synch::syncRep>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_newPost : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_newPost() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::synch::Message, ::synch::syncRep>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::synch::Message, ::synch::syncRep>* streamer) {
                       return this->StreamednewPost(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_newPost() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status newPost(::grpc::ServerContext* /*context*/, const ::synch::Message* /*request*/, ::synch::syncRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamednewPost(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::synch::Message,::synch::syncRep>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_newFollow<WithStreamedUnaryMethod_newUsers<WithStreamedUnaryMethod_newPost<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_newFollow<WithStreamedUnaryMethod_newUsers<WithStreamedUnaryMethod_newPost<Service > > > StreamedService;
};

}  // namespace synch


#endif  // GRPC_synch_2eproto__INCLUDED
